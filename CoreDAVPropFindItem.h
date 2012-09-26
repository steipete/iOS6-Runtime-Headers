/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPropFindItem : CoreDAVItem  {
    CoreDAVItemWithNoChildren *_propName;
    CoreDAVItemWithNoChildren *_allProp;
    CoreDAVItem *_include;
    CoreDAVItem *_prop;
}

@property(retain) CoreDAVItemWithNoChildren * propName;
@property(retain) CoreDAVItemWithNoChildren * allProp;
@property(retain) CoreDAVItem * include;
@property(retain) CoreDAVItem * prop;

+ (id)copyParseRules;

- (void)setInclude:(id)arg1;
- (void)setAllProp:(id)arg1;
- (void)setPropName:(id)arg1;
- (id)include;
- (id)allProp;
- (id)propName;
- (void)setProp:(id)arg1;
- (id)prop;
- (id)init;
- (void)dealloc;
- (id)description;

@end
