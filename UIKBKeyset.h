/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableArray;

@interface UIKBKeyset : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    NSMutableArray *m_keylists;
}

@property(retain) NSString * name;
@property(retain) NSMutableArray * keylists;

+ (id)keyset;

- (id)init;
- (void)dealloc;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)addKeylist:(id)arg1;
- (id)keylistWithName:(id)arg1;
- (void)setKeylists:(id)arg1;
- (id)keylists;
- (void)setName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
