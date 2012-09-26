/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;

@interface CoreDAVParseRule : NSObject  {
    int _minimumNumber;
    int _maximumNumber;
    NSString *_nameSpace;
    NSString *_elementName;
    Class _objectClass;
    SEL _setterMethod;
}

@property(readonly) int minimumNumber;
@property(readonly) int maximumNumber;
@property(readonly) NSString * nameSpace;
@property(readonly) NSString * elementName;
@property(readonly) Class objectClass;
@property(readonly) SEL setterMethod;


- (SEL)setterMethod;
- (Class)objectClass;
- (id)elementName;
- (int)maximumNumber;
- (int)minimumNumber;
- (id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;
- (id)nameSpace;
- (void)dealloc;
- (id)description;

@end
