/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, NSDictionary;

@interface BBSound : NSObject <NSCopying, NSCoding> {
    int _soundType;
    unsigned long _systemSoundID;
    unsigned int _soundBehavior;
    NSString *_audioCategory;
    NSString *_ringtoneName;
    BOOL _repeats;
    NSDictionary *_vibrationPattern;
}

@property int soundType;
@property unsigned long systemSoundID;
@property(retain) NSString * ringtoneName;
@property(getter=isRepeating) BOOL repeats;
@property(retain) NSDictionary * vibrationPattern;
@property unsigned int soundBehavior;
@property(copy) NSString * audioCategory;

+ (id)alertSoundWithSystemSoundID:(unsigned long)arg1;
+ (id)_possiblyCachedAlertSoundForInitializedSound:(id)arg1;

- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3;
- (id)audioCategory;
- (unsigned int)soundBehavior;
- (BOOL)isRepeating;
- (id)ringtoneName;
- (id)vibrationPattern;
- (void)setAudioCategory:(id)arg1;
- (void)setRepeats:(BOOL)arg1;
- (void)setRingtoneName:(id)arg1;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 audioCategory:(id)arg4;
- (void)setSoundBehavior:(unsigned int)arg1;
- (void)setSystemSoundID:(unsigned long)arg1;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2 vibrationPattern:(id)arg3;
- (unsigned long)systemSoundID;
- (BOOL)_isUniquableAlertSound;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2;
- (void)setVibrationPattern:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)soundType;
- (void)setSoundType:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
