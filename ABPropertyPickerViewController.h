/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;

@interface ABPropertyPickerViewController : ABPickerViewController <ABCardPropertyPickerDelegate> {
    struct __CFArray { } *_properties;
    NSArray *_policies;
    void *_addressBook;
    void *_person;
}

@property void* addressBook;
@property void* person;
@property struct __CFArray { }* properties;
@property(retain) NSArray * policies;


- (void)setPolicies:(id)arg1;
- (id)policies;
- (id)propertyPicker;
- (float)ab_heightToFitForViewInPopoverView;
- (void)propertyPicker:(id)arg1 selectedProperty:(int)arg2 withDefaultValue:(id)arg3;
- (void)propertyPicker:(id)arg1 selectedProperty:(int)arg2;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void)dealloc;
- (void)setPerson:(void*)arg1;
- (void*)person;
- (void)setProperties:(struct __CFArray { }*)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct __CFArray { }*)properties;

@end
