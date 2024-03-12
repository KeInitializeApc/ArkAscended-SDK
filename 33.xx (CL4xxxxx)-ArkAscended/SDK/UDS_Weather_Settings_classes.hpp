#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0xC8 - 0x30)
// BlueprintGeneratedClass UDS_Weather_Settings.UDS_Weather_Settings_C
class UUDS_Weather_Settings_C : public UPrimaryDataAsset
{
public:
	double                                       Cloud_Coverage;                                    // 0x30(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       Rain;                                              // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	double                                       Snow;                                              // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, DuplicateTransient)
	double                                       Lightning;                                         // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       Wind_Variation;                                    // 0x50(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       Wind_Intensity;                                    // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       Fog;                                               // 0x60(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       Dust;                                              // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference)
	double                                       Material_Wetness;                                  // 0x70(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       Material_Snow_Coverage;                            // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       Material_Dust_Coverage;                            // 0x80(0x8)(ConstParm, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       SkylightTemperature;                               // 0x88(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bOverrideSkylightSettings;                         // 0x90(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FB5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ColdTemperatureModification;                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       HotTemperatureModification;                        // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       Fog_Weather;                                       // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          MoonColorMultiplier;                               // 0xB0(0x10)(Edit, ConstParm, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       ElectricalStorm;                                   // 0xC0(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUDS_Weather_Settings_C* GetDefaultObj();

};

}


