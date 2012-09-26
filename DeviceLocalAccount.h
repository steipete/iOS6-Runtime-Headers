/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol> {
}

+ (id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
+ (id)tetheredSourceForDataClass:(id)arg1;
+ (BOOL)isTetheredSyncingDataclass:(id)arg1;
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1;
+ (id)basicAccountProperties;
+ (id)typeString;
+ (id)accountWithBasicAccount:(id)arg1;
+ (id)_identifier;

- (id)syncStoreIdentifier;
- (id)displayName;
- (id)identifier;

@end
