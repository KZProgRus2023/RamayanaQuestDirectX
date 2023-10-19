#pragma once

#include "Common\StepTimer.h"
#include "Common\DeviceResources.h"
#include "Content\Sample3DSceneRenderer.h"
#include "Content\SampleFpsTextRenderer.h"
#include "pch.h"

// Прорисовывает содержимое Direct2D и 3D на экране.
namespace RamayanaQuestDirectX
{
	class RamayanaQuestDirectXMain : public DX::IDeviceNotify
	{
	public:
		RamayanaQuestDirectXMain(const std::shared_ptr<DX::DeviceResources>& deviceResources);
		~RamayanaQuestDirectXMain();
		void CreateWindowSizeDependentResources();
		void Update();
		bool Render();

		// IDeviceNotify
		virtual void OnDeviceLost();
		virtual void OnDeviceRestored();

	private:
		// Кэшированный указатель на ресурсы устройства.
		std::shared_ptr<DX::DeviceResources> m_deviceResources;

		// TODO: замените это собственными визуализаторами содержимого.
		std::unique_ptr<Sample3DSceneRenderer> m_sceneRenderer;
		std::unique_ptr<SampleFpsTextRenderer> m_fpsTextRenderer;

		// Таймер цикла прорисовки.
		DX::StepTimer m_timer;
	};
}