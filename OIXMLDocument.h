/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode  {
    OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}


- (id)contentString;
- (id)createMutableXMLString;
- (void)setRootElement:(id)arg1;
- (void)setCharacterEncoding:(id)arg1;
- (id)initWithRootElement:(id)arg1;
- (id)closingTagString;
- (id)XMLString;
- (id)openingTagString;
- (id)rootElement;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(id)arg1;

@end
