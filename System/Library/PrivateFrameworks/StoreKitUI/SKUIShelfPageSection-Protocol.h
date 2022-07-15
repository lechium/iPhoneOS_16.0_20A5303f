//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIShelfPageComponent, SKUIShelfPageSectionConfiguration;

@protocol SKUIShelfPageSection <NSObject>
@property(readonly, nonatomic) SKUIShelfPageComponent *pageComponent;
@property(readonly, nonatomic) SKUIShelfPageSectionConfiguration *configuration;
- (id)initWithPageComponent:(SKUIShelfPageComponent *)arg1;
- (id)initWithPageComponent:(SKUIShelfPageComponent *)arg1 configuration:(SKUIShelfPageSectionConfiguration *)arg2;
@end
