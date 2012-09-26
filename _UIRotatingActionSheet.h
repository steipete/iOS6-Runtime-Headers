/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIActionSheetDelegate>, <_UIRotatingActionSheetDelegate>;

@interface _UIRotatingActionSheet : UIActionSheet  {
    <_UIRotatingActionSheetDelegate> *_rotatingSheetDelegate;
    <UIActionSheetDelegate> *_delegateWhileRotating;
    unsigned int _arrowDirections;
    BOOL _isRotating;
}

@property <_UIRotatingActionSheetDelegate> * rotatingSheetDelegate;
@property unsigned int arrowDirections;


- (id)init;
- (void)dealloc;
- (id)rotatingSheetDelegate;
- (unsigned int)arrowDirections;
- (void)_updateSheetPositionAfterRotation;
- (BOOL)presentSheetFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setArrowDirections:(unsigned int)arg1;
- (BOOL)presentSheet;
- (void)setRotatingSheetDelegate:(id)arg1;
- (void)doneWithSheet;
- (void)didRotate;
- (void)willRotate;

@end
