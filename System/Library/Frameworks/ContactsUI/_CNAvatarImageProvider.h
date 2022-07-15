//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNUIPRLikenessProvider;

__attribute__((visibility("hidden")))
@interface _CNAvatarImageProvider : NSObject
{
    id <CNUIPRLikenessProvider> _likenessProvider;	// 8 = 0x8
}

+ (id)roundImage:(id)arg1;	// IMP=0x00100000001a22c1
- (void).cxx_destruct;	// IMP=0x00000000001a22b1
@property(readonly, nonatomic) id <CNUIPRLikenessProvider> likenessProvider; // @synthesize likenessProvider=_likenessProvider;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3;	// IMP=0x00000000001a2093
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00000000001a207f
- (id)initWithLikenessProvider:(id)arg1;	// IMP=0x00000000001a2014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
