//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@interface MPSGraphResizeBaseOp : MPSGraphOperation
{
    unsigned long long _mode;	// 80 = 0x50
    _Bool _centerResult;	// 88 = 0x58
    _Bool _alignCorners;	// 89 = 0x59
    unsigned long long _layout;	// 96 = 0x60
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 mode:(unsigned long long)arg4 centerResult:(_Bool)arg5 alignCorners:(_Bool)arg6 layout:(unsigned long long)arg7 name:(id)arg8;	// IMP=0x00000000000ca0fe

@end

