//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishApplauseModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000008a662
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000008a5d9
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000008a284
- (void).cxx_destruct;	// IMP=0x000000000008abe9
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008a9ae
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008a91c
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008a7f9
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008a77a
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008a561
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008a4e9
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008a464
- (id)init;	// IMP=0x000000000008a407
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000008a376

@end

