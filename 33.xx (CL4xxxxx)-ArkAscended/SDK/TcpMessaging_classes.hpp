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
	bool                                         EnableTransport;                                   // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_A7E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ListenEndpoint;                                    // 0x30(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	TArray<class FString>                        ConnectToEndpoints;                                // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        ConnectionRetryDelay;                              // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        ConnectionRetryPeriod;                             // 0x54(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x58(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A8A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTcpMessagingSettings* GetDefaultObj();

};

}


