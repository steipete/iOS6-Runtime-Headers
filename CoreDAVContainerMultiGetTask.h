/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskManager>, NSError, NSString, NSSet, <CoreDAVAccountInfoProvider>;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable> {
    NSSet *_urls;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
    BOOL _shouldIgnoreResponseErrors;
    NSSet *_additionalPropElements;
    NSSet *_parsedContents;
    NSSet *_missingURLs;
}

@property(retain) NSSet * additionalPropElements;
@property(copy) id completionBlock;
@property <CoreDAVTaskManager> * taskManager;
@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(readonly) NSError * error;
@property double timeoutInterval;
@property(readonly) NSSet * missingURLs;
@property(readonly) NSSet * parsedContents;
@property BOOL shouldIgnoreResponseErrors;


- (void)setShouldIgnoreResponseErrors:(BOOL)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (BOOL)shouldIgnoreResponseErrors;
- (id)parsedContents;
- (id)missingURLs;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (id)additionalPropElements;
- (void)setAdditionalPropElements:(id)arg1;
- (id)copyAdditionalPropElements;
- (void)dealloc;

@end
