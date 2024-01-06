#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class TcpMessaging.TcpMessagingSettings
class UTcpMessagingSettings : public UObject
{
public:
	bool                                         EnableTransport;                                   // 0x28(0x1)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst)
	uint8                                        Pad_B20[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ListenEndpoint;                                    // 0x30(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst)
	TArray<class FString>                        ConnectToEndpoints;                                // 0x40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst)
	int32                                        ConnectionRetryDelay;                              // 0x50(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, EditConst)
	int32                                        ConnectionRetryPeriod;                             // 0x54(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x58(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B22[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTcpMessagingSettings* GetDefaultObj();

};

}


