//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSString, SKUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SKUIDividerPageComponent : SKUIPageComponent
{
    NSString *_title;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000282c7
@property(readonly, nonatomic) NSString *dividerTitle; // @synthesize dividerTitle=_title;
- (long long)componentType;	// IMP=0x00000000000282ab
- (id)initWithViewElement:(id)arg1;	// IMP=0x000000000002827c
- (id)initWithDividerTitle:(id)arg1;	// IMP=0x0000000000028202
- (id)initWithCustomPageContext:(id)arg1;	// IMP=0x0000000000028106

// Remaining properties
@property(readonly, nonatomic) SKUIDividerViewElement *viewElement; // @dynamic viewElement;

@end

