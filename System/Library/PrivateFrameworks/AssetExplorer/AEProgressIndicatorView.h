//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/PLRoundProgressView.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface AEProgressIndicatorView : PLRoundProgressView
{
    NSProgress *__progress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000efc4
@property(readonly, nonatomic) NSProgress *_progress; // @synthesize _progress=__progress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000ef1e
- (void)dealloc;	// IMP=0x000000000000eea2
- (id)initWithFrame:(struct CGRect)arg1 progress:(id)arg2;	// IMP=0x000000000000edf2

@end

