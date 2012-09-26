/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationWorkspace : NSObject  {
}

+ (id)defaultWorkspace;

- (BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (id)deviceIdentifierForAdvertising;
- (BOOL)invalidateIconCache:(id)arg1;
- (BOOL)unregisterApplication:(id)arg1;
- (BOOL)registerApplication:(id)arg1;
- (BOOL)registerApplicationDictionary:(id)arg1;
- (id)privateURLSchemes;
- (id)installedApplications;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)directionsApplications;
- (id)applicationIdentifierForOpeningResource:(id)arg1;
- (id)applicationForOpeningResource:(id)arg1;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (BOOL)openURL:(id)arg1 withOptions:(id)arg2;
- (id)deviceIdentifierForVendor;
- (BOOL)openURL:(id)arg1;
- (id)URLOverrideForURL:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)publicURLSchemes;

@end
