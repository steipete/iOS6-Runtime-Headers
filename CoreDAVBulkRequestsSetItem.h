/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem  {
    CoreDAVBulkRequestsItem *_crudItem;
    CoreDAVBulkRequestsItem *_simpleItem;
}

@property(readonly) NSDictionary * dictRepresentation;
@property(retain) CoreDAVBulkRequestsItem * crudItem;
@property(retain) CoreDAVBulkRequestsItem * simpleItem;

+ (id)copyParseRules;

- (void)setSimpleItem:(id)arg1;
- (void)setCrudItem:(id)arg1;
- (id)simpleItem;
- (id)crudItem;
- (id)dictRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;

@end
