/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class _NSUndoObject;

@interface _NSUndoObject : NSObject  {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}


- (id)init;
- (void)invoke;
- (id)initWithTarget:(id)arg1;
- (BOOL)isBeginMark;
- (BOOL)isEndMark;
- (id)target;

@end
