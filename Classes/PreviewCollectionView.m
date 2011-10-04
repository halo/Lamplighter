#import "PreviewCollectionView.h"

#import "SlideView.h"
#import "Slide.h"
#import "ApplicationDelegate.h"

@implementation PreviewCollectionView

- (NSCollectionViewItem*) newItemForRepresentedObject:(id)object {
  
  [self setMaxItemSize:NSMakeSize(200, 150)];
  [self setMinItemSize:NSMakeSize(200, 150)];
  
  SlideView *slideView = [[SlideView alloc] initWithSlide:object];
  NSCollectionViewItem *item = [NSCollectionViewItem new];
  [item setView:slideView];
    
  return item;
}

- (void) setSelectionIndexes:(NSIndexSet *)indexes {
  [super setSelectionIndexes:indexes];
  Slide* selectedSlide = [[self content] objectAtIndex:[indexes firstIndex]];
  [[NSApp projectorController] setSlide:selectedSlide];
}

@end