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
	bool                                         EnabledByDefault;                                  // 0x28(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableTransport;                                   // 0x29(0x1)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bAutoRepair;                                       // 0x2A(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_23D6[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxSendRate;                                       // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint32                                       AutoRepairAttemptLimit;                            // 0x30(0x4)(ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint16                                       WorkQueueSize;                                     // 0x34(0x2)(Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x36(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_23D7[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                UnicastEndpoint;                                   // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                MulticastEndpoint;                                 // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EUdpMessageFormat                 MessageFormat;                                     // 0x58(0x1)(Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        MulticastTimeToLive;                               // 0x59(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_23D8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        StaticEndpoints;                                   // 0x60(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        ExcludedEndpoints;                                 // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         EnableTunnel;                                      // 0x80(0x1)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_23D9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TunnelUnicastEndpoint;                             // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                TunnelMulticastEndpoint;                           // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        RemoteTunnelEndpoints;                             // 0xA8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUdpMessagingSettings* GetDefaultObj();

};

}


