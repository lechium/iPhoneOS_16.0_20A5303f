//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface STStorage
{
    struct _Storage *m_pCStorage;	// 8 = 0x8
}

- (void)setClass:(CDStruct_214f2dba)arg1;	// IMP=0x0000000000378051
- (int)getChildType:(id)arg1;	// IMP=0x0000000000378010
- (id)getChildrenInfo;	// IMP=0x0000000000377ebe
- (id)getInfo;	// IMP=0x0000000000377dee
- (id)openStorage:(id)arg1 withMode:(int)arg2;	// IMP=0x0000000000377ce4
- (id)openStream:(id)arg1 withMode:(int)arg2;	// IMP=0x0000000000377bda
- (void)close;	// IMP=0x0000000000377bbd
- (void)dealloc;	// IMP=0x0000000000377b7f
- (id)initWithCStorage:(struct _Storage *)arg1;	// IMP=0x0000000000377b1f
- (id)init;	// IMP=0x0000000000377b0b

@end

