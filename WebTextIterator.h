/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject  {
    WebTextIteratorPrivate *_private;
}


- (id)currentNode;
- (id)currentText;
- (unsigned int)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (id)currentRange;
- (BOOL)atEnd;
- (void)advance;
- (void)dealloc;
- (id)initWithRange:(id)arg1;

@end
