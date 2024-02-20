#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C
class IScorchedEarthDayCycle_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IScorchedEarthDayCycle_Interface_C* GetDefaultObj();

	void GetIsElectricalStorm(bool* Return);
	int32 GetElectricalStormValues(double* Radius);
};

}


