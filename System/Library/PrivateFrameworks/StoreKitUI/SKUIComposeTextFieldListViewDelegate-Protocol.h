//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIComposeTextFieldConfiguration, SKUIComposeTextFieldListView;

@protocol SKUIComposeTextFieldListViewDelegate <NSObject>
- (SKUIComposeTextFieldConfiguration *)textFieldList:(SKUIComposeTextFieldListView *)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;
- (long long)numberOfFieldsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;
- (long long)numberOfColumnsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;

@optional
- (void)textFieldListValuesDidChange:(SKUIComposeTextFieldListView *)arg1;
- (void)textFieldListValidityDidChange:(SKUIComposeTextFieldListView *)arg1;
@end
