//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@protocol CLWifiServiceProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetSetAutoJoin:(_Bool)arg1;
- (void)setBackgroundExitScanCount:(int)arg1;
- (void)setWifiPower:(_Bool)arg1;
- (_Bool)syncgetSetAllowBeingRanged:(const void *)arg1 enable:(_Bool)arg2;
- (_Bool)syncgetStartRangingWithPeers:(const void *)arg1 andTimeout:(double)arg2;
- (_Bool)syncgetStartScanWithParameters:(struct ScanParameters (^)(void))arg1;
- (_Bool)syncgetStartScanWithType:(BOOL)arg1 lowPriority:(_Bool)arg2 lowLatency:(_Bool)arg3 passive:(_Bool)arg4 requester:(const char *)arg5 channels:(const void *)arg6;
- (_Bool)syncgetStartScanWithType:(BOOL)arg1 lowPriority:(_Bool)arg2 passive:(_Bool)arg3 requester:(const char *)arg4;
- (void)clearExitAndEntryScanNetworks:(_Bool)arg1;
- (_Bool)syncgetHostedNetwork:(void *)arg1;
- (_Bool)syncgetAssociatedNetwork:(void *)arg1;
- (void)fetchScanResultWithReply:(void (^)(struct ScanResult (^)(void)))arg1;
- (struct ScanResult (^)(void))syncgetBackgroundScanCacheResult;
- (struct ScanResult (^)(void))syncgetScanResult;
- (struct ScanStats (^)(void))syncgetScanStats;
- (void)setScannerExitScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg1;
- (void)setScannerEntryScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg1;
- (void)setEntryScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg1 andExitScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg2;
- (void)programEntryScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg1 andExitScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg2;
- (_Bool)syncgetIsSimulationEnabled;
- (_Bool)syncgetIsAvailable;
- (_Bool)syncgetIsWifiPowered;
- (_Bool)syncgetIsWifiTrackingAvailable;
- (void)fetchIsWifiAvailableWithReply:(void (^)(_Bool))arg1;
- (_Bool)syncgetIsAssociated;
- (void)fetchIsAssociatedWithReply:(void (^)(_Bool))arg1;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end
