/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class NSString, NSMutableSet;

@interface IMDAppleIDNotification : NSObject  {
    NSString *_appleID;
    NSString *_deviceName;
    NSMutableSet *_aliases;
    NSMutableSet *_sessions;
    NSMutableSet *_serviceTypes;
}

@property(retain) NSString * appleID;
@property(retain) NSString * deviceName;
@property(retain) NSMutableSet * aliases;
@property(retain) NSMutableSet * sessions;
@property(retain) NSMutableSet * serviceTypes;


- (void)setServiceTypes:(id)arg1;
- (id)serviceTypes;
- (void)setSessions:(id)arg1;
- (id)sessions;
- (void)setAliases:(id)arg1;
- (void)addSession:(id)arg1;
- (void)addServiceType:(int)arg1;
- (void)setAppleID:(id)arg1;
- (id)appleID;
- (void)addAlias:(id)arg1;
- (id)aliases;
- (void)setDeviceName:(id)arg1;
- (id)deviceName;
- (id)init;
- (void)dealloc;

@end
