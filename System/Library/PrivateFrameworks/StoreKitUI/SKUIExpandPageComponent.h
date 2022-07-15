//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSMutableArray, SKUIExpandViewElement;

__attribute__((visibility("hidden")))
@interface SKUIExpandPageComponent : SKUIPageComponent
{
    NSMutableArray *_childComponents;	// 8 = 0x8
    SKUIExpandViewElement *_viewElement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000352fec
@property(readonly, nonatomic) SKUIExpandViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (id)metricsElementName;	// IMP=0x0000000000352fce
- (long long)componentType;	// IMP=0x0000000000352fc3
- (id)childComponents;	// IMP=0x0000000000352fae
- (id)childComponentForIndex:(long long)arg1;	// IMP=0x0000000000352f91
- (id)initWithViewElement:(id)arg1;	// IMP=0x0000000000352d41

@end
