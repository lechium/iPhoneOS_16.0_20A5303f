//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AttentionAwareness/BKOperationDelegate-Protocol.h>

@class BKFaceDetectStateInfo, BKOperation;

@protocol BKFaceDetectOperationDelegate <BKOperationDelegate>

@optional
- (void)operation:(BKOperation *)arg1 faceDetectStateChanged:(BKFaceDetectStateInfo *)arg2;
@end
