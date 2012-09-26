/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITabBarControllerDelegate>, NSMutableArray, UIView, UIViewController, UINavigationController, UITabBar, NSArray;

@interface UITabBarController : UIViewController <UITabBarDelegate, NSCoding> {
    UITabBar *_tabBar;
    UIView *_containerView;
    UIView *_viewControllerTransitionView;
    id _tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UINavigationController *_moreNavigationController;
    NSArray *_customizableViewControllers;
    <UITabBarControllerDelegate> *_delegate;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    unsigned int _maxItems;
    struct { 
        unsigned int isShowingMoreItem : 1; 
        unsigned int needsToRebuildItems : 1; 
        unsigned int isBarHidden : 1; 
        unsigned int editButtonOnLeft : 1; 
    } _tabBarControllerFlags;
    NSMutableArray *_moreChildViewControllers;
}

@property(copy) NSArray * viewControllers;
@property UIViewController * selectedViewController;
@property unsigned int selectedIndex;
@property(readonly) UINavigationController * moreNavigationController;
@property(copy) NSArray * customizableViewControllers;
@property(readonly) UITabBar * tabBar;
@property <UITabBarControllerDelegate> * delegate;
@property NSMutableArray * moreChildViewControllers;

+ (Class)_moreNavigationControllerClass;

- (void)dealloc;
- (void)setMoreChildViewControllers:(id)arg1;
- (id)moreChildViewControllers;
- (void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2;
- (void)_setMaximumNumberOfItems:(unsigned int)arg1;
- (BOOL)showsEditButtonOnLeft;
- (void)setShowsEditButtonOnLeft:(BOOL)arg1;
- (BOOL)_isBarHidden;
- (void)beginCustomizingTabBar:(id)arg1;
- (void)setTabBar:(id)arg1;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)arg1;
- (void)revealTabBarSelection;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(BOOL)arg4;
- (void)concealTabBarSelection;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (BOOL)_allowsCustomizing;
- (id)customizableViewControllers;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)allViewControllers;
- (void)_setSelectedViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (BOOL)_allowSelectionWithinMoreList;
- (void)setCustomizableViewControllers:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (id)_existingMoreNavigationController;
- (id)_viewControllersInTabBar;
- (unsigned int)selectedIndex;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (id)transientViewController;
- (id)moreNavigationController;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (void)_tabBarItemClicked:(id)arg1;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (void)_prepareTabBar;
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
- (void)setSelectedViewController:(id)arg1;
- (id)selectedViewController;
- (void)__viewWillLayoutSubviews;
- (void)setViewControllers:(id)arg1;
- (void)showBarWithTransition:(int)arg1;
- (id)tabBar;
- (void)hideBarWithTransition:(int)arg1;
- (id)_selectedViewControllerInTabBar;
- (void)_layoutViewController:(id)arg1;
- (id)viewControllers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)loadView;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)_isPresentationContextByDefault;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (id)_transitionView;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)defaultFirstResponder;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
