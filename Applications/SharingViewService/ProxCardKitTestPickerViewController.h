//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXPickerContentViewController.h>

@class NSArray, PRXAction;

@interface ProxCardKitTestPickerViewController : PRXPickerContentViewController
{
    PRXAction *_nextAction;	// 8 = 0x8
    NSArray *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000186178
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x0010000000186131
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00100000001860d2
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x001000000018608e
- (id)init;	// IMP=0x0010000000185e40

@end

