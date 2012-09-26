/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImagePickerController, ABPeoplePickerNavigationController, UIImage;

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    UIImagePickerController *_imagePickerController;
    UIImage *_image;
    void *_person;
    ABPeoplePickerNavigationController *_peoplePicker;
}

@property(retain) UIImage * image;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;
@property void* person;
@property(retain) UIImagePickerController * imagePickerController;


- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (void)setPerson:(void*)arg1;
- (void*)person;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (id)imagePickerController;
- (void)setPeoplePicker:(id)arg1;
- (id)peoplePicker;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)_cleanup;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;

@end
