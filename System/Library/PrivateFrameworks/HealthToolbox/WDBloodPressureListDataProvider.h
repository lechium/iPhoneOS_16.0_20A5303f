//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDSampleListDataProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDBloodPressureListDataProvider : WDSampleListDataProvider
{
    NSArray *_systolicAndDiastolicTypes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000732f5
- (id)textForObject:(id)arg1;	// IMP=0x0000000000072f9b
- (id)predicateForType:(id)arg1;	// IMP=0x0000000000072f30
- (id)sampleTypes;	// IMP=0x0000000000072e94
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;	// IMP=0x0000000000072d85

@end

