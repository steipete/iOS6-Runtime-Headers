/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKShareChallengeFooterTextSection, GKTableSection, GKShareChallengeButtonSection;

@interface GKShareChallengeDataSource : GKSectionArrayDataSource  {
    GKShareChallengeFooterTextSection *_footerTextSection;
    SEL _addFriendButtonAction;
    GKShareChallengeButtonSection *_buttonSection;
    SEL _shareButtonAction;
    GKTableSection *_mainSection;
    SEL _challengeButtonAction;
    BOOL _shouldShowAddFriendButton;
    BOOL _shouldShowShareButton;
}

@property(retain) GKTableSection * mainSection;
@property(retain) GKShareChallengeButtonSection * buttonSection;
@property(retain) GKShareChallengeFooterTextSection * footerTextSection;
@property(readonly) BOOL shouldEnableChallengeButton;
@property BOOL shouldShowShareButton;
@property BOOL shouldShowAddFriendButton;
@property SEL challengeButtonAction;
@property SEL shareButtonAction;
@property SEL addFriendButtonAction;

+ (float)buttonSectionTopMargin;

- (void)setShouldShowShareButton:(BOOL)arg1;
- (void)setShouldShowAddFriendButton:(BOOL)arg1;
- (void)setChallengeButtonAction:(SEL)arg1;
- (id)mainSection;
- (void)setShareButtonAction:(SEL)arg1;
- (void)setAddFriendButtonAction:(SEL)arg1;
- (void)setShowShareButton:(BOOL)arg1;
- (id)footerTextSection;
- (id)buttonSection;
- (void)setFooterTextSection:(id)arg1;
- (id)prepareFooterTextSection;
- (void)setButtonSection:(id)arg1;
- (id)prepareButtonSection;
- (void)setMainSection:(id)arg1;
- (id)prepareMainSection;
- (SEL)addFriendButtonAction;
- (id)addFriendButtonTitle;
- (BOOL)shouldShowAddFriendButton;
- (SEL)shareButtonAction;
- (id)shareButtonTitle;
- (BOOL)shouldShowShareButton;
- (SEL)challengeButtonAction;
- (BOOL)shouldEnableChallengeButton;
- (id)challengeButtonTitle;
- (void)prepareSections;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end
