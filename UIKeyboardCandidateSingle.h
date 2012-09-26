/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKeyboardCandidateSingle : UIKeyboardCandidate  {
    NSString *_candidate;
    NSString *_input;
}

@property(copy) NSString * candidate;
@property(copy) NSString * input;

+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;
+ (id)candidateWithUnchangedInput:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCandidate:(id)arg1;
- (id)initWithUnchangedInput:(id)arg1;
- (void)setCandidate:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;
- (id)candidate;
- (id)input;
- (void)setInput:(id)arg1;

@end
