//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DOCContentUnavailableConfiguration, DOCContentUnavailableConfigurationState;

@interface DOCContentUnavailableHostableViewController : UIViewController
{
}

@property(copy, nonatomic, setter=doc_setContentUnavailableConfiguration:) DOCContentUnavailableConfiguration *docContentUnavailableConfiguration;
- (id)_contentUnavailableConfiguration;	// IMP=0x0010000000010088
- (void)_setContentUnavailableConfiguration:(id)arg1;	// IMP=0x001000000000ffdd
@property(readonly, nonatomic) DOCContentUnavailableConfigurationState *docContentUnavailableConfigurationState;
- (id)_contentUnavailableConfigurationState;	// IMP=0x001000000000ff22
- (void)docUpdateContentUnavailableConfigurationUsingState:(id)arg1;	// IMP=0x001000000000fec6
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;	// IMP=0x001000000000fe77
- (void)docSetNeedsUpdateContentUnavailableConfiguration;	// IMP=0x001000000000fe65

@end
