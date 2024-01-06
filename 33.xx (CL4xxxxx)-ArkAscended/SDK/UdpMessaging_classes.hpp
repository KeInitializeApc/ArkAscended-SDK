#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xB8 - 0x28)
// Class UdpMessaging.UdpMessagingSettings
class UUdpMessagingSettings : public UObject
{
public:
	bool                                         EnabledByDefault;                                  // 0x28(0x1)(ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableTransport;                                   // 0x29(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	bool                                         bAutoRepair;                                       // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E1F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxSendRate;                                       // 0x2C(0x4)(Edit, Net, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint32                                       AutoRepairAttemptLimit;                            // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint16                                       WorkQueueSize;                                     // 0x34(0x2)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x36(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E20[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                UnicastEndpoint;                                   // 0x38(0x10)(BlueprintVisible, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                MulticastEndpoint;                                 // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EUdpMessageFormat                 MessageFormat;                                     // 0x58(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        MulticastTimeToLive;                               // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E23[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        StaticEndpoints;                                   // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        ExcludedEndpoints;                                 // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableTunnel;                                      // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E25[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TunnelUnicastEndpoint;                             // 0x88(0x10)(Edit, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                TunnelMulticastEndpoint;                           // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        RemoteTunnelEndpoints;                             // 0xA8(0x10)(ExportObject, Net, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUdpMessagingSettings* GetDefaultObj();

};

}


