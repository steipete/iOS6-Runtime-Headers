/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKInviteInternal, GKPlayer, NSData;

@interface GKInvite : NSObject  {
    GKInviteInternal *_internal;
    BOOL _cancelled;
    GKPlayer *_invitingPlayer;
}

@property(readonly) NSString * inviter;
@property(getter=isHosted,readonly) BOOL hosted;
@property(readonly) unsigned int playerGroup;
@property(readonly) unsigned int playerAttributes;
@property(retain) GKInviteInternal * internal;
@property(readonly) NSString * inviteID;
@property(readonly) NSData * sessionToken;
@property(readonly) NSString * message;
@property(readonly) BOOL isNearby;
@property(readonly) GKPlayer * invitingPlayer;
@property(getter=isCancelled) BOOL cancelled;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (id)invitingPlayer;
- (BOOL)isHosted;
- (id)inviter;
- (void)setInternal:(id)arg1;
- (id)internal;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)setCancelled:(BOOL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)isCancelled;

@end
