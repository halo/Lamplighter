@class MainWindowController;
@class ProjectorController;
@class SongsArrayController;
@class PlaylistArrayController;

@interface ApplicationDelegate : NSApplication {

  // Window Controllers
  MainWindowController *mainWindowController;
  
  // Projector Controller
  //ProjectorController *projectorController;

  // Array Controllers
  SongsArrayController *songsArrayController;
  PlaylistArrayController *playlistArrayController;
  
  // Object Controllers
  NSObjectController *projectorSlideController;
  
  // Core Data
  NSPersistentStoreCoordinator *persistentStoreCoordinator;
  NSManagedObjectModel *managedObjectModel;
  NSManagedObjectContext *managedObjectContext;
}

// Window Controllers
@property (nonatomic, retain, readonly) MainWindowController *mainWindowController;

// Projector
//@property (nonatomic, retain, readonly) ProjectorController *projectorController;

// Array Controllers
@property (nonatomic, retain, readonly) SongsArrayController *songsArrayController;
@property (nonatomic, retain, readonly) PlaylistArrayController *playlistArrayController;

// Object Controllers
@property (nonatomic, retain, readonly) NSObjectController *projectorSlideController;

// Core Data
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

-(IBAction) saveAction:sender;

@end