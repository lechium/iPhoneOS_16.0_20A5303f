//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIFeedback, _UIFeedbackParameters;

@protocol _UIFeedbackPlayer
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock;
- (void)_stopFeedback:(_UIFeedback *)arg1;
- (void)_playFeedback:(_UIFeedback *)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(_UIFeedbackParameters *)arg1 withKey:(NSString *)arg2;
@end
