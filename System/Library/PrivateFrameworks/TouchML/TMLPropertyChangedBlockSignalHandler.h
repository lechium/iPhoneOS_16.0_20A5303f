//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TMLBinding;

@interface TMLPropertyChangedBlockSignalHandler
{
    TMLBinding *_binding;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000072ff
- (void)bindingValueChanged:(id)arg1;	// IMP=0x000000000000724b
- (void)detach;	// IMP=0x00000000000071ff
- (void)attach;	// IMP=0x00000000000071b3
@property(readonly, nonatomic) long long bindingOrder;
- (id)initWithBlock:(CDUnknownBlockType)arg1 binding:(id)arg2;	// IMP=0x000000000000712b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

