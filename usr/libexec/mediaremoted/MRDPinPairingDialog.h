//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MRDPinPairingDialogDelegate;

@interface MRDPinPairingDialog : NSObject
{
    id <MRDPinPairingDialogDelegate> _delegate;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x004000000004aea8
- (void).cxx_destruct;	// IMP=0x002000000004af5e
@property(nonatomic) __weak id <MRDPinPairingDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)closeAll;	// IMP=0x001000000004af31
- (void)closeForClient:(id)arg1;	// IMP=0x001000000004af2b
- (void)showWithPin:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000004af25

@end

