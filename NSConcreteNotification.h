/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification  {
    NSString *name;
    id object;
    NSDictionary *userInfo;
    BOOL dyingObject;
}

+ (id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (void)dealloc;
- (id)object;
- (id)name;
- (id)userInfo;
- (void)recycle;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

@end
