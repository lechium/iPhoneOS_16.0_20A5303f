//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RadiosPreferences;
@protocol StatusIndicatorDelegate;

@interface StatusIndicatorManager : NSObject
{
    RadiosPreferences *_radioPreferences;	// 8 = 0x8
    Class _initialLocationProviderClass;	// 16 = 0x10
    _Bool _waitingForAuthorization;	// 24 = 0x18
    unsigned long long _indicatorType;	// 32 = 0x20
    id <StatusIndicatorDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000025c7e0
@property(readonly, nonatomic) __weak id <StatusIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long indicatorType; // @synthesize indicatorType=_indicatorType;
- (void)updateIndicatorType;	// IMP=0x001000000025c69d
- (void)locationManagerApprovalDidChange:(id)arg1;	// IMP=0x001000000025c438
- (void)airplaneModeChanged;	// IMP=0x001000000025c426
- (void)dealloc;	// IMP=0x001000000025c3b1
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000025c1d5

@end
