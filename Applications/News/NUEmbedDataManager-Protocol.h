//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SXEmbedDataProvider-Protocol.h"

@protocol NUEmbedDataManager <SXEmbedDataProvider>
@property(readonly, nonatomic) _Bool hasLoaded;
- (void)loadEmbedDataWithCompletion:(void (^)(void))arg1;
@end
