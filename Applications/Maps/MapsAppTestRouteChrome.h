//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MapsAppTestRouteChromeDelegate;

@interface MapsAppTestRouteChrome
{
    id <MapsAppTestRouteChromeDelegate> _chromeDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000e7070
@property(nonatomic) __weak id <MapsAppTestRouteChromeDelegate> chromeDelegate; // @synthesize chromeDelegate=_chromeDelegate;
- (void)_setupDirectionsPlan:(id)arg1;	// IMP=0x00100000000e6e42
- (_Bool)runTest;	// IMP=0x00100000000e6cc5
- (void)cleanup:(_Bool)arg1;	// IMP=0x00100000000e6c7b

@end
