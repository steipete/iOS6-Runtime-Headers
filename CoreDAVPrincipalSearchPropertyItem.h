/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, CoreDAVItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem  {
    CoreDAVItem *_prop;
    CoreDAVLeafItem *_descriptionItem;
}

@property(retain) CoreDAVItem * prop;
@property(retain) CoreDAVLeafItem * descriptionItem;

+ (id)copyParseRules;

- (void)setDescriptionItem:(id)arg1;
- (void)setProp:(id)arg1;
- (id)descriptionItem;
- (id)prop;
- (id)init;
- (void)dealloc;
- (id)description;

@end
