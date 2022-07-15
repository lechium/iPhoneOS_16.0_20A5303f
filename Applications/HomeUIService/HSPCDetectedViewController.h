//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HSPCDetectedViewController
{
    _Bool _firstDetectedCard;	// 8 = 0x8
}

+ (id)viewControllerForCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0040000000011ba5
@property(readonly, nonatomic, getter=isFirstDetectedCard) _Bool firstDetectedCard; // @synthesize firstDetectedCard=_firstDetectedCard;
- (id)commitConfiguration;	// IMP=0x0010000000012434
@property(readonly, nonatomic) NSString *prominentButtonTitleKey;
- (id)iconDescriptor;	// IMP=0x00100000000122ce
- (id)handleInstallationGuideURL;	// IMP=0x0010000000012220
- (id)initWithCenterContentView:(id)arg1;	// IMP=0x00100000000121f1
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000011d62

@end
