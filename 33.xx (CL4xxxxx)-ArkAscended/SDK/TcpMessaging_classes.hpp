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
	bool                                         EnableTransport;                                   // 0x28(0x1)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_B4E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ListenEndpoint;                                    // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        ConnectToEndpoints;                                // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        ConnectionRetryDelay;                              // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        ConnectionRetryPeriod;                             // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B51[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTcpMessagingSettings* GetDefaultObj();

};

}


