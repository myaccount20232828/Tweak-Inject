#import <Foundation/Foundation.h>
#import <MobileCoreServices/MobileCoreServices.h>

void spawnRoot(NSString* path, NSArray* args);
void enumerateProcessesUsingBlock(void (^enumerator)(pid_t pid, NSString* executablePath, BOOL* stop));
void InjectTweak(NSString* BundleID, NSString* TweakPath, NSString* RootPath);
void InjectTweakIntoProcess(pid_t PID, NSString* TweakPath, NSString* RootPath);
NSDictionary* GetInfoPlist(NSString* ExecutablePath);
void InjectAll(NSString* RootPath);

@interface LSApplicationWorkspace: NSObject
+ (instancetype)defaultWorkspace;
- (void)openApplicationWithBundleID:(NSString *)bundleID;
@end
