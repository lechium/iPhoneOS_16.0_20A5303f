//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class CNGeminiChannel, NSIndexPath, NSMutableArray, NSString, UITableViewController;
@protocol CNPickerControllerDelegate><UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerController : UINavigationController
{
    UITableViewController *_tableViewController;	// 8 = 0x8
    NSMutableArray *_geminiChannels;	// 16 = 0x10
    CNGeminiChannel *_preferredGeminiChannel;	// 24 = 0x18
    NSIndexPath *_selectedIndexPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000581bf
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) CNGeminiChannel *preferredGeminiChannel; // @synthesize preferredGeminiChannel=_preferredGeminiChannel;
@property(retain, nonatomic) NSMutableArray *geminiChannels; // @synthesize geminiChannels=_geminiChannels;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000057d43
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000057d2e
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000057b28
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000578a4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000577d4
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000057767
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000057702
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000576b3
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000057667
- (void)prepareCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000572f9
- (id)geminiChannelForIndexPath:(id)arg1;	// IMP=0x000000000005725e
- (id)indexPathForGeminiChannel:(id)arg1;	// IMP=0x0000000000057186
- (void)cancelPicker:(id)arg1;	// IMP=0x000000000005713a
- (void)donePicker:(id)arg1;	// IMP=0x0000000000057128
- (void)didPickItem;	// IMP=0x0000000000057026
- (void)setGeminiResult:(id)arg1 reload:(_Bool)arg2;	// IMP=0x0000000000056e5e
- (void)setGeminiResult:(id)arg1;	// IMP=0x0000000000056e47
- (id)initWithGeminiResult:(id)arg1;	// IMP=0x0000000000056d09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNPickerControllerDelegate><UINavigationControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

